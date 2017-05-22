int action(int option) {
  int val = 0;
  switch (option) {
    case 1: {
        setPointA = 3500;
        setPointB = 3500;
        setPointC = 3500;
        setPointD = 3500;
        // read the value from the potentiometer sensor
        potValUpdate();

        //determine if there is a new turn
        currentPositionA = edgeDetect(MOTOR_A);
        currentPositionB = edgeDetect(MOTOR_B);
        currentPositionC = edgeDetect(MOTOR_C);
        currentPositionD = edgeDetect(MOTOR_D);

        //PID control
        gainSchedule(currentPositionA, setPointA);
        gainSchedule(currentPositionB, setPointB);
        gainSchedule(currentPositionC, setPointC);
        gainSchedule(currentPositionD, setPointD);

        //Printing parameters for debugging
        prtF();

        //Motor Action
        //      controller(MOTOR_B, currentPositionB, setPointB);
        controller(MOTOR_A, currentPositionA, setPointA);
        controller(MOTOR_B, currentPositionB, setPointB);
        controller(MOTOR_C, currentPositionC, setPointC);
        controller(MOTOR_D, currentPositionD, setPointD);

        //Update last pot value
        lastPotA = potValA;
        lastPotB = potValB;
        lastPotC = potValC;
        lastPotD = potValD;
        break;
      }
    case 2:
      {
        setPointA = -3500;
        setPointB = 0;
        setPointC = 0;
        setPointD = 0;
        // read the value from the potentiometer sensor
        potValUpdate();

        //determine if there is a new turn
        currentPositionA = edgeDetect(MOTOR_A);
        currentPositionB = edgeDetect(MOTOR_B);
        currentPositionC = edgeDetect(MOTOR_C);
        currentPositionD = edgeDetect(MOTOR_D);

        //PID control
        gainSchedule(currentPositionA, setPointA);
        gainSchedule(currentPositionB, setPointB);
        gainSchedule(currentPositionC, setPointC);
        gainSchedule(currentPositionD, setPointD);

        //Printing parameters for debugging
        prtF();

        //Motor Action
        //      controller(MOTOR_B, currentPositionB, setPointB);
        controller(MOTOR_A, currentPositionA, setPointA);

        //Update last pot value
        lastPotA = potValA;
        lastPotB = potValB;
        lastPotC = potValC;
        lastPotD = potValD;
        break;
      }
    case 3:
      {
        setPointA = 3500;
        setPointB = -3500;
        setPointC = 0;
        setPointD = 0;
        // read the value from the potentiometer sensor
        potValUpdate();

        //determine if there is a new turn
        currentPositionA = edgeDetect(MOTOR_A);
        currentPositionB = edgeDetect(MOTOR_B);
        currentPositionC = edgeDetect(MOTOR_C);
        currentPositionD = edgeDetect(MOTOR_D);

        //PID control
        gainSchedule(currentPositionA, setPointA);
        gainSchedule(currentPositionB, setPointB);
        gainSchedule(currentPositionC, setPointC);
        gainSchedule(currentPositionD, setPointD);

        //Printing parameters for debugging
        prtF();

        //Motor Action
        //      controller(MOTOR_B, currentPositionB, setPointB);
        controller(MOTOR_A, currentPositionA, setPointA);

        //Update last pot value
        lastPotA = potValA;
        lastPotB = potValB;
        lastPotC = potValC;
        lastPotD = potValD;
        break;
      }
    case 4:
      {
        setPointA = 3500;
        setPointB = 0;
        setPointC = 0;
        setPointD = 0;
        // read the value from the potentiometer sensor
        potValUpdate();

        //determine if there is a new turn
        currentPositionA = edgeDetect(MOTOR_A);
        currentPositionB = edgeDetect(MOTOR_B);
        currentPositionC = edgeDetect(MOTOR_C);
        currentPositionD = edgeDetect(MOTOR_D);

        //PID control
        gainSchedule(currentPositionA, setPointA);
        gainSchedule(currentPositionB, setPointB);
        gainSchedule(currentPositionC, setPointC);
        gainSchedule(currentPositionD, setPointD);

        //Printing parameters for debugging
        prtF();

        //Motor Action
        //      controller(MOTOR_B, currentPositionB, setPointB);
        controller(MOTOR_A, currentPositionA, setPointA);

        //Update last pot value
        lastPotA = potValA;
        lastPotB = potValB;
        lastPotC = potValC;
        lastPotD = potValD;
        break;
      }
    case 5:
      {
        setPointA = 0;
        setPointB = 0;
        setPointC = 0;
        setPointD = 0;
        // read the value from the potentiometer sensor
        potValUpdate();

        //determine if there is a new turn
        currentPositionA = edgeDetect(MOTOR_A);
        currentPositionB = edgeDetect(MOTOR_B);
        currentPositionC = edgeDetect(MOTOR_C);
        currentPositionD = edgeDetect(MOTOR_D);

        //PID control
        gainSchedule(currentPositionA, setPointA);
        gainSchedule(currentPositionB, setPointB);
        gainSchedule(currentPositionC, setPointC);
        gainSchedule(currentPositionD, setPointD);

        //Printing parameters for debugging
        prtF();

        //Motor Action
        //      controller(MOTOR_B, currentPositionB, setPointB);
        controller(MOTOR_A, currentPositionA, setPointA);

        //Update last pot value
        lastPotA = potValA;
        lastPotB = potValB;
        lastPotC = potValC;
        lastPotD = potValD;
        break;
      }
    default:
      // if nothing else matches, do the default
      // default is optional
      break;
  }
  // return 1 if no error occurred
  return 1;
}
