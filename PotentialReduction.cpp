#include <iostream>
#include <Eigen/Dense>

using Eigen::MatrixXd;

int main(int argc, char ** argv)
{
  MatrixXd A(2,2);
  A(0,0) = 1;
  A(0,1) = 1;
  A(1,0) = 1;
  A(1,1) = 1;

  std::cout<<A<<std::endl;
}
