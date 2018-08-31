import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.io.PrintWriter;
import java.util.Stack;
import java.util.StringTokenizer;

public class Main {

    public static void main(String[] args) {
        InputStream inputStream = System.in;
        OutputStream outputStream = System.out;
        InputReader in = new InputReader(inputStream);
        PrintWriter out = new PrintWriter(outputStream);
        Task solver = new Task();
        solver.solve(in, out);
        out.close();
    }

    static class Task {
        
        // myStack：输入栈，栈中的所有元素即是待排序的元素
        // 返回值：输出栈，即排序后的序列，满足从栈底至栈顶为升序
        Stack<Integer> sorting(Stack<Integer> myStack) {
            Stack<Integer> result = new Stack<>(); // result存放了返回值，即输出栈
            if (myStack.empty()) // 边界情况
                return result;

            int tmp = myStack.pop(); // tmp记录的是下一个要插入到result栈中的数
            while (!myStack.empty() || (!result.empty() && result.peek() > tmp)) { // 注意后面的判断条件不要漏
                // 如果将tmp压入到result是顺序的
                // 那么可以直接将tmp压入进result栈中
                // 并且从myStack栈中取出栈顶作为新的tmp
                if (result.empty() || result.peek() <= tmp) {
                    result.push(tmp);
                    tmp = myStack.pop();
                } else { // 否则我们得将比tmp大的元素（目前是result栈顶）重新放回myStack栈中
                    myStack.push(result.pop());
                }
            }
            result.push(tmp); // 最后别忘了将tmp压回result栈中
            return result;
        }

        void solve(InputReader in, PrintWriter out) {
            int n = in.nextInt();
            Stack<Integer> myStack = new Stack<>();
            while (!myStack.empty())
                myStack.pop();
            for (int i = 0; i < n; ++i) {
                int tmp = in.nextInt();
                myStack.push(tmp);
            }

            Stack<Integer> result = sorting(myStack);
            for (Integer x : result)
                out.println(x);
        }

    }

    static class InputReader {
        BufferedReader reader;
        StringTokenizer tokenizer;

        private InputReader(InputStream stream) {
            reader = new BufferedReader(new InputStreamReader(stream), 32768);
            tokenizer = null;
        }

        private String next() {
            while (tokenizer == null || !tokenizer.hasMoreTokens()) {
                try {
                    tokenizer = new StringTokenizer(reader.readLine());
                } catch (IOException e) {
                    throw new RuntimeException(e);
                }
            }
            return tokenizer.nextToken();
        }

        private short nextShort() {
            return Short.parseShort(next());
        }

        private int nextInt() {
            return Integer.parseInt(next());
        }

        private long nextLong() {
            return Long.parseLong(next());
        }

        private float nextFloat() {
            return Float.parseFloat(next());
        }

        private double nextDouble() {
            return Double.parseDouble(next());
        }
    }

}