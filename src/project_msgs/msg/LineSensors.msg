std_msgs/Header header
float32 left_darkness     # 0.0 (floor) ... 1.0 (line)
float32 right_darkness    # 0.0 (floor) ... 1.0 (line)
float32 line_position     # left_darkness - right_darkness: positive = line on the left
bool line_detected        # true if at least one sensor sees the line
