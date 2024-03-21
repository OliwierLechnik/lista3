import java.util.OptionalInt;

public class Pascal {

    int n;
    int[] arr;
    public int binomial(int k){

        int nom = 1;
        int denom = 1;
        for(int i = this.n; i > n-k; i--){
            nom*=i;
        }
        for(int i = 1; i<=k; i++){
            denom*=i;
        }
        return nom/denom;
    }
    public Pascal(int n){
        this.n = n;
        arr = new int[this.n+1];
    }

    public void generate(){
        for(int i = 0; i < this.n; i++){
            arr[i] = arr[this.n-i] = this.binomial(i);
        }
    }

    public OptionalInt at(int i){
        try{
            return OptionalInt.of(this.arr[i]);
        }catch(Exception e){
            return OptionalInt.empty();
        }
    }
}
