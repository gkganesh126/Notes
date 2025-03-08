package main

import (
	"context"
	"fmt"
	"time"

	kafka "github.com/segmentio/kafka-go"
)

func main() {
	// to produce messages
	topic := "test"
	partition := 0

	conn, _ := kafka.DialLeader(context.Background(), "tcp", "localhost:9092", topic, partition)

	conn.SetWriteDeadline(time.Now().Add(10 * time.Second))
	conn.WriteMessages(
		kafka.Message{Value: []byte("one!")},
		kafka.Message{Value: []byte("two!")},
		kafka.Message{Value: []byte("three!")},
	)
	conn.Close()

	time.Sleep(2000 * time.Millisecond)

	conn, _ = kafka.DialLeader(context.Background(), "tcp", "localhost:9092", topic, partition)
	conn.SetReadDeadline(time.Now().Add(10 * time.Second))
	batch := conn.ReadBatch(10e3, 1e6) // fetch 10KB min, 1MB max

	//	b := make([]byte, 10e3) // 10KB max per message
	for {
		msg, err := batch.ReadMessage()
		if err != nil {
			break
		}
		fmt.Println(string(msg.Key), " ", string(msg.Value))
	}

	batch.Close()
	conn.Close()
}
