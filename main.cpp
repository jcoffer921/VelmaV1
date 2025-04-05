/*------------------------------------------------------------------------------------------------------------------
/ Title: Virtual Medical Assistant
/
/ Author: Jason Coffer
/
/ Copyright: Jason Coffer
/
/ Date: 4/4/25
/
/ Description: This program will help you determine your stress levels on a day-to-day
/ basis by asking a series of wellness-related questions. It then provides a stress level
/ classification and offers recommendations for maintaining or improving mental health.
/
/ Sources:
/    WebMD - https://www.webmd.com/balance/stress-management/stress-level-too-high
/    Mayo Clinic - https://www.mayoclinic.org/healthy-lifestyle/stress-management/in-depth/stress/art-20046037
/    Harvard Health - https://www.health.harvard.edu/staying-healthy/understanding-the-stress-response
/
------------------------------------------------------------------------------------------------------------------*/

#include <iostream>
#include <string>
#include <limits>
using namespace std;

// Define the Virtual Medical Assistant class
class vma {
public:
    int score = 0; // Holds the user's cumulative stress score

    // This function asks the user 10 stress-related questions and updates their score
    void questions() {
        int response;
        string questions[10] = {
            "1. I feel overwhelmed by the number of tasks I need to complete.",
            "2. I experience physical symptoms like headaches, muscle tension, or stomach issues without a clear medical cause.",
            "3. I have difficulty concentrating or making decisions.",
            "4. I feel anxious or worried about things I cannot control.",
            "5. I notice changes in my sleep patterns, such as trouble falling or staying asleep.",
            "6. I feel less motivated or find less enjoyment in activities I usually like.",
            "7. I experience changes in appetite, such as eating more or less than usual.",
            "8. I feel fatigued or lack energy even after adequate rest.",
            "9. I use substances like caffeine, alcohol, or nicotine to cope with stress.",
            "10. I feel irritable or short-tempered with others."
        };

        for (int i = 0; i < 10; i++) {
            cout << questions[i] << endl;
            cout << "1 - Rarely or Never\n2 - Sometimes\n3 - Often or Always\n";
            cout << "Your response: ";
            // Input validation to ensure response is 1, 2, or 3
            while (!(cin >> response) || response < 1 || response > 3) {
                cout << "Invalid input. Please enter 1, 2, or 3: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            score += response; // Add valid response to the total score
        }
    }

    // Classifies the user's stress level based on their score
    void scoreClassification(string name) {
        cout << endl;
        if (score >= 10 && score <= 15) {
            cout << "Level A - Low Stress" << endl;
            cout << "Your score is " << score << ". You're handling stress well and maintaining healthy balance." << endl;
            cout << "\nGreat job, " << name << "! You're doing an excellent job managing your stress levels." << endl;
        } else if (score > 15 && score <= 22) {
            cout << "Level B - Moderate Stress" << endl;
            cout << "Your score is " << score << ". Stress may be starting to impact your health." << endl;
            cout << "\nYou're doing okay, " << name << ", but there's room to reduce some of that tension." << endl;
        } else if (score > 22 && score <= 30) {
            cout << "Level C - High Stress" << endl;
            cout << "Your score is " << score << ". High stress is likely affecting your body and mind." << endl;
            cout << "\nYou're under a lot of stress, " << name << ". Consider prioritizing your well-being." << endl;
        } else {
            cout << "Invalid score. Please make sure your total is between 10 and 30." << endl;
        }
    }

    // Provides health-based recommendations depending on the user's stress level
    void personalRecommendation() {
        cout << endl;
        cout << "Here are some recommendations based on your results:" << endl;
        if (score >= 10 && score <= 15) {
            cout << "Recommendations (based on Harvard Health & Mayo Clinic):" << endl;
            cout << "- Continue practicing deep breathing or meditation daily" << endl;
            cout << "- Maintain regular physical activity to stabilize mood and sleep" << endl;
            cout << "- Stay connected to supportive people and maintain a healthy routine" << endl;
        } else if (score > 15 && score <= 22) {
            cout << "Recommendations (based on Mayo Clinic & WebMD):" << endl;
            cout << "- Start mindfulness techniques like yoga or journaling" << endl;
            cout << "- Set boundaries with work/school and prioritize sleep" << endl;
            cout << "- Recognize stress triggers and use relaxation techniques (e.g., visualization, calm music)" << endl;
        } else if (score > 22 && score <= 30) {
            cout << "Recommendations (based on Harvard Health & WebMD):" << endl;
            cout << "- Consider speaking with a mental health professional or counselor" << endl;
            cout << "- Practice the relaxation response (deep breathing, calming words, or guided imagery)" << endl;
            cout << "- Avoid unhealthy coping like overeating, caffeine, or alcohol" << endl;
            cout << "- Engage in regular aerobic exercise to reduce cortisol levels" << endl;
        } else {
            cout << "Invalid Score." << endl;
        }
    }
};

int main() {
    string name;

    // Introduction and privacy note
    cout << "Hi! I am Velma, your personal medical assistant. I am here to determine whether or not \n"
         << "you have high or low stress levels." << endl;

    // Get user name
    cout << "Please enter your full name so I can further assist you today: ";
    getline(cin, name);

    // Welcome and explanation of assessment method
    cout << "\nHello, " << name << "! It is so nice to meet you! Today I will be asking you a series of questions to "
         << "determine your \nstress levels. Don't worry—you won't have to say much." << endl;

    // Emphasize privacy
    cout << "\nVelma respects your privacy. None of your answers will be saved or shared." << endl;

    // Explain Likert scale used for scoring
    cout << "\nI will be using the Likert scale to determine your stress levels. " << endl;
    cout << "|-----------------------------------|\n";
    cout << "|     Option      ||      Score     |\n";
    cout << "|-----------------------------------|\n";
    cout << "| Rarely or Never ||        1       |\n";
    cout << "| Sometimes       ||        2       |\n";
    cout << "| Often or Always ||        3       |\n";
    cout << "|-----------------------------------|\n";

    // Begin assessment
    cout << "\nLet's begin, " << name << "!\n" << endl;

    // Create instance of VMA and run functions
    vma q;
    q.questions();
    q.scoreClassification(name);
    q.personalRecommendation();

    cout << endl;
    cout << "Thanks for checking in with me today, " << name << ". Take care of yourself!";

    return 0;
}
