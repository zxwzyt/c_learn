import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Comparator;
import java.util.List;
import java.util.PriorityQueue;
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

        // 这个函数用于计算答案（最短路）
        // n：节点数目
        // m：双向边数目
        // U,V,W：分别存放各边的两端点、边权
        // s,t：分别表示起点、重点
        // 返回值：答案（即从 s 到 t 的最短路径长度）
        int shortestPath(int n, int m, List<Integer> U, List<Integer> V, List<Integer> W, int s, int t) {
            /* 请在这里设计你的算法 */
        }

        // ================= 代码实现结束 =================

        void solve(InputReader in, PrintWriter out) {
            int n = in.nextInt();
            int m = in.nextInt();
            int s = in.nextInt();
            int t = in.nextInt();
            List<Integer> U = new ArrayList<>();
            List<Integer> V = new ArrayList<>();
            List<Integer> W = new ArrayList<>();
            for (int i = 0; i < m; ++i) {
                U.add(in.nextInt());
                V.add(in.nextInt());
                W.add(in.nextInt());
            }

            out.println(shortestPath(n, m, U, V, W, s, t));
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