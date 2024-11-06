// Filename: JobAssignment.java
package Task2;

import java.util.HashMap;
import java.util.Map;

//***********************************************************************
// Class: JobAssignment
// Connects clients and freelancers for specific jobs and tracks the status of job assignments.
// Applied Principles:
// - Single Responsibility Principle (SRP): Responsible solely for managing job assignments between clients and freelancers
// - Dependency Inversion Principle (DIP): Depends on abstractions for client and freelancer IDs, not concrete implementations
//***********************************************************************

public class JobAssignment {
    private Map<Integer, Assignment> assignments = new HashMap<>();

    // Nested class to represent an individual job assignment
    private class Assignment {
        private int clientId;
        private int freelancerId;
        private int projectId;
        private String status;

        public Assignment(int clientId, int freelancerId, int projectId) {
            this.clientId = clientId;
            this.freelancerId = freelancerId;
            this.projectId = projectId;
            this.status = "Pending"; // Default status
        }

        public void markCompleted() {
            this.status = "Completed";
        }

        public String getStatus() {
            return status;
        }

        @Override
        public String toString() {
            return "Assignment [Client ID: " + clientId + ", Freelancer ID: " + freelancerId +
                    ", Project ID: " + projectId + ", Status: " + status + "]";
        }
    }

    // Method to assign a freelancer to a client project
    public void assignJob(int clientId, int freelancerId, int projectId) {
        Assignment assignment = new Assignment(clientId, freelancerId, projectId);
        assignments.put
