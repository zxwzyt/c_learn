import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.io.PrintWriter;
import java.util.Arrays;
import java.util.Comparator;
import java.util.StringTokenizer;

import static java.lang.Math.min;
import static java.lang.Math.sqrt;

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

        final int N = 300005;

        // 用于存储一个二维平面上的点
        class ip {
            int x, y;

            // 构造函数
            ip(int x, int y) {
                this.x = x;
                this.y = y;
            }

        }
        ip[] a = new ip[N];
        ip[] b = new ip[N];

        // 计算x的平方
        long sqr(long x) {
            return x * x;
        }

        // 计算点a和点b的距离
        double dis(ip a, ip b) {
            return sqrt(sqr(a.x - b.x) + sqr(a.y - b.y));
        }

        /* 请在这里定义你需要的全局变量 */

        // 计算最近点对的距离
        // n：n个点
        // X, Y：分别表示x轴坐标和y轴坐标，下标从0开始
        // 返回值：最近的距离
        double getAnswer(int n, int[] X, int[] Y) {
            /* 请在这里设计你的算法 */
        }

        // ================= 代码实现结束 =================

        void solve(InputReader in, PrintWriter out) {
            int n = in.nextInt();
            int[] X = new int[n];
            int[] Y = new int[n];
            for (int i = 0; i < n; ++i) {
                X[i] = in.nextInt();
                Y[i] = in.nextInt();
            }
            out.printf("%.2f\n", getAnswer(n, X, Y));
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