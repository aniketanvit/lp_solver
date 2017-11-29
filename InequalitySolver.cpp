#include <iostream>
#include <Eigen/Dense>

Eigen::MatrixXf getMatrixForDualSystem(Eigen::MatrixXf A, Eigen::VectorXf b)
{
  Eigen::MatrixXf A_transpose = A.transpose();
  Eigen::MatrixXf B(A_transpose.rows()+1, A_transpose.cols()+1);

  const int R = A_transpose.rows();
  const int C = A_transpose.cols();

  for (int i=0; i<R; ++i)
  {
    for(int j=0; j<C; ++j)
    {
      B(i,j) = A(i,j);
    }

    B(i,C) = 0;
  }

  const int b_dimesions = b.size();
  for(int i=0; i<b_dimesions; ++i)
  {
    B(R,i) = b[i];
  }

  B(R,C) = 1;

  return B;
}

Eigen::VectorXf getSolutionOfPrimalSystem(Eigen::VectorXf witness)
{
  int witness_dimensions = witness.size();
  const int alpha = witness[witness_dimensions-1];

  witness.resize(witness_dimensions-1);
  witness_dimensions = witness.size();

  for(int i=0; i<witness_dimensions-1; ++i)
  {
    witness[i] /= alpha;
  }

  return witness;
}

int main(int argc, char ** argv)
{
  int m = 2, n = 2;

  Eigen::MatrixXf A(m,n);
  A(0,0) = 1;
  A(0,1) = 2;
  A(1,0) = 3;
  A(1,1) = 4;

  std::cout<<A<<std::endl;
}
