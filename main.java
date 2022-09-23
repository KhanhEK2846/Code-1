public class Main{
    public static void main (String[] args){
        int h =11;
        int x =5;
        int z =1;
        for(int i =0; i< h; i++){
            for(int kt =0;kt<x;kt++){
                System.out.print(" ");
            }
            for(int j =0;j<z;j++){
                System.out.print("*");
            }
            System.out.println();
            if(i<5)
            {
                x--;
                z = z +2;
            }else{
                x++;
                z= z -2;
            }   
        }

    }
}
