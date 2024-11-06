// Filename: FreelancerDetails.java
package Task2;

import java.util.ArrayList;
import java.util.List;

//***********************************************************************
// Class: FreelancerDetails
// Manages details of a freelancer, including skills and contact information.
// Applied Principles:
// - Single Responsibility Principle (SRP): Focused solely on managing freelancer details
//***********************************************************************

public class FreelancerDetails {
    private int id;
    private String name;
    private List<String> skills = new ArrayList<>();

    public FreelancerDetails(int id, String name) {
        this.id = id;
        this.name = name;
    }

    public void addSkill(String skill) {
        skills.add(skill);
    }

    public List<String> getSkills() {
        return skills;
    }
}
