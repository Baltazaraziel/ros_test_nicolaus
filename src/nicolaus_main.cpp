#include <ros_test/turtle_abstract.h>

int main(int argc, char **argv)
{
    ros::init(argc, argv, "ros_test");
    tutorial::AbstractTurtle turtle;
    // turtle should run in haus von nikolaus
    // initial "N"
    turtle.turn(90);
    turtle.forward(3);
    turtle.turn(-135);
    turtle.forward(2*3);
    turtle.turn(135);
    turtle.forward(3);

    // roof
    turtle.turn(90);
    turtle.forward(3);
    turtle.turn(-135);
    turtle.forward(1.5);
    turtle.turn(-90);
    turtle.forward(1.5);

    // finish
    turtle.turn(-90);
    turtle.forward(2*3);
    turtle.turn(135);
    turtle.forward(3);

    ROS_INFO_STREAM("Finished");

    return 0;
}
