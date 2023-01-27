public class Swap {
    int i,j;

    Swap(int _i,int _j) {
    
        i = _i;
        j = _j;
    }
    void performSwap() {
        int temp;
        temp = i;
        i = j;
        j = temp;
    }

    void display() {
        
        System.out.println(i+"-"+j);

    }

    public static void main(String[] args) {
        Swap obj = new Swap(3,4);
        System.out.println("Before Swapping");
        obj.display();
        
        obj.performSwap();
        System.out.println("After Swapping");
        obj.display();

    }
}
