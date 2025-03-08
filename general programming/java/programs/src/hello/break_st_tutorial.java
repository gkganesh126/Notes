package hello;

public class break_st_tutorial {

    public static void main(String[] args) {  
        aa:  
        for(int i=1;i<=3;i++){    
                bb:  
                for(int j=1;j<=3;j++){    
                    if(i==2&&j==2){    
                        //using break statement with label  
                        break aa;    
                    }    
                    System.out.println(i+" "+j);    
                }    
        }    
    } 

}