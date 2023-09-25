class Matrix
{
public:

  Matrix(double a = 0, double b = 0, double c = 0, double d = 0) : a_(a), b_(b), c_(c), d_(d){}
  ~Matrix(){};

  double det ()
  {
    return a_ * d_ - b_ * c_;
  }
  int isSingular ()
  {
    return det () == 0;
  }
  Matrix inverse ();
  void print ();
private:
  double a_, b_, c_, d_;
};
Matrix
Matrix::inverse ()
{
  double k = 1 / det ();
  Matrix temp (k * d_, -k * b_, -k * c_, k * a_);
  return temp;
}

void
Matrix::print ()
{
  cout << a_ << "  " << b_ << '\n' << c_ << "  " << d_ << "\n";
}
