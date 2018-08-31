import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
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

        // ================= 代码实现开始 =================
        
        /* 请在这里定义你需要的全局变量 */

        // 本函数传入数组 a 及所有询问，你需要求解所有询问并一并返回
        // n：序列 a 的长度
        // a：存储了序列 a
        // Q：询问个数
        // query：依次存储了所有询问的参数 x
        // 返回值：一个 List<Integer>，依次存放各询问的答案
        List<Integer> getAnswer(int n, List<Integer> a, int Q, List<Integer> query) {
            /* 请在这里设计你的算法 */
        }

        // ================= 代码实现结束 =================

        void solve(InputReader in, PrintWriter out) {
            int n, Q;
            List<Integer> a = new ArrayList<>();
            List<Integer> query = new ArrayList<>();
            n = in.nextInt();
            for (int i = 0; i < n; ++i)
                a.add(in.nextInt());
            Q = in.nextInt();
            for (int i = 0; i < Q; ++i)
                query.add(in.nextInt());
            List<Integer> ans = getAnswer(n, a, Q, query);
            for (int i = 0; i < Q; ++i)
                out.println(ans.get(i));
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