import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.io.PrintWriter;
import java.util.ArrayList;
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

        final int N = 10005;

        // 为了减少复制开销，我们直接读入信息到全局变量中，并统计了每个点的入度到数组in中
        // n, m：点数和边数
        // in：in[i]表示点i的入度
        // e：e[i][j]表示点i的第j条边指向的点
        int n, m;
        int[] in = new int[N];
        List<Integer>[] e = new ArrayList[N];

        // 判断所给有向无环图是否存在唯一的合法数列
        // 返回值：若存在返回1；否则返回0。
        int getAnswer() {
            /* 请在这里设计你的算法 */
        }

        // ================= 代码实现结束 =================

        void solve(InputReader _in, PrintWriter out) {
            int T = _in.nextInt();
            while (T-- != 0) {
                n = _in.nextInt();
                m = _in.nextInt();
                for (int i = 1; i <= n; ++i) {
                    in[i] = 0;
                    e[i] = new ArrayList<>();
                }
                for (int i = 0; i < m; ++i) {
                    int x = _in.nextInt(), y = _in.nextInt();
                    e[x].add(y);
                    ++in[y];
                }
                out.println(getAnswer());
            }
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