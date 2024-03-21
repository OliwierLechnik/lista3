import java.util.OptionalInt;

public class Main {
    public static void main(String[] args) {

        Pascal pascal;
        try{
            pascal = new Pascal(args[0]);
            pascal.generate();
        }catch(NegativeArraySizeException e){
            System.out.println("wrong input");
            return;
        }



        for(int i = -1; i < 8; i++){
            OptionalInt opt = pascal.at(i);
            final int idx = i;
            opt.ifPresentOrElse(
                    v -> System.out.println(v) ,
                    () -> System.out.println("no value at indef of " + idx)
            );
        }

    }
}