import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.io.PrintWriter;
import java.util.Arrays;
import java.util.Comparator;
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

        final int N = 300005;

        class ip {
            int x, y, i;
            ip(int x, int y) {
                this.x = x;
                this.y = y;
            }
        }

        // 两点相减得到的向量
        ip sub(ip a, ip b) {
            return new ip(a.x - b.x, a.y - b.y);
        }

        // 计算a和b的叉积（外积）
        long cross(ip a, ip b) {
            return (long)a.x * b.y - (long)a.y * b.x;
        }

        static class cmp implements Comparator<ip> {
            // 先比较x轴再比较y轴，
            @Override
            public int compare(ip a, ip b) {
                if (a.x < b.x)
                    return -1;
                else if (a.x > b.x)
                    return 1;
                else {
                    if (a.y < b.y)
                        return -1;
                    else if (a.y > b.y)
                        return 1;
                    return 0;
                }
            }
        }

        // 计算二维点数组a的凸包，将凸包放入b数组中，下标均从0开始
        // a, b：如上
        // n：表示a中元素个数
        // 返回凸包元素个数
        int convex(ip[] a, ip[] b, int n) {
            /* 请在这里设计你的算法 */
        }

        // ================= 代码实现结束 =================

        void solve(InputReader in, PrintWriter out) {
            int n = in.nextInt();
            ip[] a = new ip[n];
            ip[] b = new ip[n + 1];

            for (int i = 0; i < n; ++i) {
                a[i] = new ip(0, 0);
                b[i] = new ip(0, 0);
                a[i].x = in.nextInt();
                a[i].y = in.nextInt();
                a[i].i = i + 1;
            }
            int m = convex(a, b, n);
            long ans = m;
            for (int i = 0; i < m; ++i)
                ans = (ans * b[i].i) % (n + 1);
            out.println(ans);
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