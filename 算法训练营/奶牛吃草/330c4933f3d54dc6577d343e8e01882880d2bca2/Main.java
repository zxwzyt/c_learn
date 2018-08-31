import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.io.PrintWriter;
import java.util.Arrays;
import java.util.StringTokenizer;

import static java.lang.Math.abs;
import static java.lang.Math.min;

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

        /* 请在这里设计你的算法 */

        // 本函数求解答案（损失的最小口感和）
        // n：青草棵数
        // k：奶牛的初始坐标
        // x：描述序列 x（这里需要注意的是，由于 x 的下标从 1 开始，因此 x[0] 的值为 -1，你可以忽略它的值，只需知道我们从下标 1 开始存放有效信息即可），意义同题目描述
        // 返回值：损失的最小口感和
        int getAnswer(int n, int k, int[] x) {
            /* 请在这里设计你的算法 */
        }

        // ================= 代码实现结束 =================

        void solve(InputReader in, PrintWriter out) {
            int n = in.nextInt(), k = in.nextInt();
            int[] x = new int[n + 1];
            x[0] = -1;
            for (int i = 1; i <= n; ++i)
                x[i] = in.nextInt();
            out.println(getAnswer(n, k, x));
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