import java.util.Scanner;
class Main
{
    public static void main (String args[])
    {
        Scanner input = new Scanner(System.in);
        String str;
        int i=0;
        
        while(true){
            str = input.nextLine();
            if(str.equals("*")){
                break;
            }
            if(str.equals("Hajj")){
                System.out.printf("Case %d: Hajj-e-Akbar\n",++i);
            }else{
                System.out.printf("Case %d: Hajj-e-Asghar\n",++i);
            }
        }
    }
}