import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.io.PrintWriter;
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

        final int M = 505, L = 1000005;

        // c：trie树上的边，c[x][y]表示从节点x出发（x从1开始），字符为y的边（y范围是0到25）
        // sz：sz[x]表示x节点的子树中终止节点的数量（子树包括x自身）
        // cnt：trie树上节点的数目
        int[][] c = new int[L][26];
        int[] sz = new int[L];
        int cnt;

        // 将字符串s加入到trie树中
        // s：所要插入的字符串
        void add(String s) {
            /* 请在这里设计你的算法 */
        }

        // 用于计算sz数组
        // x：当前节点
        void dfs(int x) {
            /* 请在这里设计你的算法 */
        }

        // 用字符串s沿着trie树上走，找到相应的节点
        // s：所给字符串
        // 返回值：走到的节点
        int walk(String s) {
            /* 请在这里设计你的算法 */
        }

        // ================= 代码实现结束 =================

        void solve(InputReader in, PrintWriter out) {
            int n = in.nextInt(), m = in.nextInt();
            for (; n-- != 0; )
                add(in.next());
            dfs(0);
            sz[0] = 0;
            for (; m-- != 0; )
                out.println(sz[walk(in.next())]);
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