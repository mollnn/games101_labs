#include <bits/stdc++.h>
#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>

const double pi = acos(-1);

signed main()
{
    Eigen::Vector3d point(2, 1, 1); // 齐次坐标表示点，所以最后一位是 1

    Eigen::Matrix3d mat_rotate;
    double theta = 45.0 / 180 * pi;
    mat_rotate << cos(theta), -sin(theta), 0,
        sin(theta), cos(theta), 0,
        0, 0, 1;

    Eigen::Matrix3d mat_transform;
    mat_transform << 1, 0, 1,
        0, 1, 2,
        0, 0, 1;

    Eigen::Vector3d point_out = mat_transform * mat_rotate * point;
    std::cout<<point_out<<std::endl;
}