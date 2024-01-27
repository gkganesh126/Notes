package hello;

import java.util.ArrayList;

public class minimumCoins {
	public static int minimumCoins(int []coins, int v) {
	       int []table = new int[v+1];
	       for(int i=0; i<table.length; i++)
	            table[i] = Integer.MAX_VALUE;
	        table[0]=0;
	        
	        for(int i=1; i<=v; i++) {
	            for(int j=0; j<coins.length; j++) {
	                if(i>=coins[j]) {
	                    int entry = table[i-coins[j]];
	                    if(entry != Integer.MAX_VALUE) {
	                        table[i] = Math.min(entry+1, table[i]);
	                    }
	                }
	            }
	        }
	        
	        if(table[v]==Integer.MAX_VALUE)
	            return -1;
	        
	        return table[v];
	   }
	   public static void main(String []args) {
	       int []coins = {1,5,7,9,11};
	       int v = 88;
	       System.out.println("minimum coins: " + minimumCoins(coins, v));
	   }
}