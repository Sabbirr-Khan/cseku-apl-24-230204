// Filename: ProjectReport.java
package Task2;

//***********************************************************************
// Class: ProjectReport
// Generates specific reports for projects, such as status, task completion, and project overview.
// Applied Principles:
// - Single Responsibility Principle (SRP): Responsible solely for generating project reports
//***********************************************************************

public class ProjectReport {
    public void generateStatusReport(Project project) {
        System.out.println("Project Report - ID: " + project.getId() + ", Title: " + project.getTitle());
        // Additional report logic
    }

    public void generateTaskReport(TaskManagement taskManagement) {
        System.out.println("Task Report:");
        // Additional logic to report each task's status
    }
}
