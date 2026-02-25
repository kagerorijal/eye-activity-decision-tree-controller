// Example of decision tree logic implementation

if (pos_amp > T1) {
    if (neg_amp < T2) {
        command = BLINK;
    } else {
        command = GAZE_LEFT;
    }
} else {
    if (time_diff > T3) {
        command = DOUBLE_BLINK;
    } else {
        command = NO_ACTION;
    }
}
