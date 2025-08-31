// file: JavaMemory.java
import java.util.ArrayList;
import java.util.List;

public class JavaMemory {
    public static void main(String[] args) {
        List<byte[]> blocks = new ArrayList<>();
        for (int i = 0; i < 10; i++) {
            blocks.add(new byte[10_000_000]);
        }
        blocks = null;
        System.gc();
        System.out.println("Done");
    }
}
