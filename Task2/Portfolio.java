// Filename: Portfolio.java
package Task2;

import java.util.ArrayList;
import java.util.List;

//***********************************************************************
// Class: Portfolio
// Manages the portfolio for a freelancer, allowing adding and updating work samples.
// Applied Principles:
// - Single Responsibility Principle (SRP): Focused solely on managing work samples
// - Open/Closed Principle (OCP): Can be extended to add more functionality without modifying existing code
//***********************************************************************

public class Portfolio {
    private List<WorkSample> workSamples = new ArrayList<>();

    public void addWorkSample(int id, String description) {
        workSamples.add(new WorkSample(id, description));
    }

    public void updateWorkSample(int id, String newDescription) {
        //Logic to update work sample
        }
    }
}

