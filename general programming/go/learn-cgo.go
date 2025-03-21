package main
/*
int increment(int i) {
i++;
return i;
}
*/
import "C"
import "fmt"
var myNumber int
func main() {
fmt.Println(myNumber)
for i:=0;i<100;i++ {
myNumber = int( C.increment(C.int(myNumber)) )
fmt.Println(myNumber)
}
}
