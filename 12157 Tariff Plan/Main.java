import java.io.OutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.io.PrintWriter;
import java.io.BufferedWriter;
import java.io.Writer;
import java.io.OutputStreamWriter;
import java.util.InputMismatchException;
import java.io.IOException;
import java.io.InputStream;

/**
 * Built using CHelper plug-in
 * Actual solution is at the top
 *
 * @author Roy
 */
public class Main {
    public static void main(String[] args) {
        InputStream inputStream = System.in;
        OutputStream outputStream = System.out;
        InputReader in = new InputReader(inputStream);
        OutputWriter out = new OutputWriter(outputStream);
        TariffPlan solver = new TariffPlan();
        solver.solve(1, in, out);
        out.close();
    }

    static class TariffPlan {
        public void solve(int testNumber, InputReader reader, OutputWriter writer) {
            int tCases = reader.readInteger();

            final int SEC4MILE = 30, SEC4JUICE = 60;
            final int MILE_RATE = 10, JUICE_RATE = 15;
            for (int cs = 1; cs <= tCases; cs++) {
                int mileCost = 0, juiceCost = 0;
                int n = reader.readInteger();
                for (int i = 0; i < n; i++) {
                    int x = reader.readInteger();
                    mileCost += calculateRate(x, SEC4MILE, MILE_RATE);
                    juiceCost += calculateRate(x, SEC4JUICE, JUICE_RATE);
                }

                writer.print("Case " + cs + ": ");
                if (mileCost == juiceCost) writer.printLine("Mile Juice " + mileCost);
                else if (mileCost < juiceCost) writer.printLine("Mile " + mileCost);
                else writer.printLine("Juice " + juiceCost);
            }
        }

        int calculateRate(int second, int limitInSecond, int rate) {
            int cost = (second / limitInSecond) * rate + rate;
            return cost;
        }

    }

    static class OutputWriter {
        private final PrintWriter writer;

        public OutputWriter(OutputStream outputStream) {
            writer = new PrintWriter(new BufferedWriter(new OutputStreamWriter(outputStream)));
        }

        public OutputWriter(Writer writer) {
            this.writer = new PrintWriter(writer);
        }

        public void print(Object... objects) {
            for (int i = 0; i < objects.length; i++) {
                if (i != 0) {
                    writer.print(' ');
                }
                writer.print(objects[i]);
            }
        }

        public void printLine(Object... objects) {
            this.print(objects);
            writer.println();
        }

        public void close() {
            writer.flush();
            writer.close();
        }

    }

    static class InputReader {
        private InputStream stream;
        private byte[] buf = new byte[1024];
        private int curChar;
        private int numChars;
        private InputReader.SpaceCharFilter filter;

        public InputReader(InputStream stream) {
            this.stream = stream;
        }

        public int read() {
            if (numChars == -1) {
                throw new InputMismatchException();
            }
            if (curChar >= numChars) {
                curChar = 0;
                try {
                    numChars = stream.read(buf);

                } catch (IOException e) {
                    throw new InputMismatchException();
                }
                if (numChars <= 0) {
                    return -1;
                }
            }
            return buf[curChar++];
        }

        public int readInteger() {
            int c = read();
            while (isSpaceChar(c)) {
                c = read();
            }
            int sgn = 1;
            if (c == '-') {
                sgn = -1;
                c = read();
            }
            int res = 0;
            do {
                if (c < '0' || c > '9') {
                    throw new InputMismatchException();
                }
                res *= 10;
                res += c - '0';
                c = read();
            } while (!isSpaceChar(c));
            return res * sgn;
        }

        public boolean isSpaceChar(int c) {
            if (filter != null) {
                return filter.isSpaceChar(c);
            }
            return c == ' ' || c == '\n' || c == '\r' || c == '\t' || c == -1;
        }

        public interface SpaceCharFilter {
            public boolean isSpaceChar(int ch);

        }

    }
}

