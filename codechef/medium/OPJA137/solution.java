class Complex {
    public double real;
    public double imaginary;

    public Complex(double r, double i) {
        real = r;
        imaginary = i;
    }

    public Complex add(Complex other) {
        double resultReal = real + other.real;
        double resultImaginary = imaginary + other.imaginary;
        return new Complex(resultReal, resultImaginary);
    }
}

class Codechef {
    public static void main(String[] args) {
        Complex num1 = new Complex(2.5, 3.0);
        Complex num2 = new Complex(1.0, -1.5);

        Complex result = num1.add(num2);

        System.out.println("Result: " + result.real + " + " + result.imaginary + "i");
    }
}
