class Motor
{
public:
    char *direction = "RIGHT";
    int position = 0;
    int distance = 0;
    void next_motor_position();
    void set_position(int position);
    bool isRight();
    bool isLeft();
    void setRight();
    void setLeft();
};