import java.util.*;
import java.lang.*;
import java.io.*;

// The main method must be in a class named "Main".
class Main {
    static int n=0,XCInterno,YBandera,ZMaximo,a,b, banderain,aAux,bAux;
    public static void main(String[] args) {

        Scanner lector = new Scanner(System.in);
        while(lector.hasNext()==true){
            a = lector.nextInt();
            b = lector.nextInt();
            aAux=a;
            bAux=b;
            if(a>b){
                banderain=a;
                a=b;
                b=banderain;
            }
            ZMaximo=0;
            for(int i=a;i<=b;i++){
                n=i;
                for(XCInterno=1;XCInterno>=1;XCInterno++){
                    if(n>1){
                        if(n%2!=0){
                            n=(3*n)+1;
                        }else{
                            n=n/2;
                        }
                    }else{
                        YBandera=XCInterno;
                        break;
                    }
                }
                if(YBandera>ZMaximo)
                ZMaximo=YBandera;
            }
            System.out.println(aAux+" "+ bAux+" "+ZMaximo);
        }
    }
}