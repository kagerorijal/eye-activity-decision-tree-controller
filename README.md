# Eye Activity Decision Tree Controller

Decision Tree-based control system for patient room utilities using EOG (Electrooculography) signals.

## System Overview

Input:
- Eye gaze left
- Eye gaze right
- Blink
- Double blink

Processing pipeline:
EOG Acquisition → Preprocessing → Feature Extraction → Decision Tree Classification → Device Control Output

## My Responsibilities

- Collected and labeled EOG dataset (4 classes)
- Prepared training and testing split (70% / 30%)
- Implemented trained Decision Tree logic on Arduino
- Translated MATLAB decision tree into embedded C logic
- Integrated classification output to hardware control system
- Verified output consistency between MATLAB and Arduino

## Feature Inputs Used

- Positive peak amplitude
- Previous positive peak amplitude
- Negative peak amplitude
- Time difference to positive peak

## Embedded Implementation

The trained decision tree was manually converted into conditional branching logic (if-else structure) and deployed on Arduino.

Classification result sent via serial communication for validation.

## Results

- Training Accuracy: >98%
- Testing Accuracy: ~93–97%
- Arduino output matched MATLAB model output
