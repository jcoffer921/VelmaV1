# VelmaV1
First version of my virtual medical assitant
# Virtual Medical Assistant

### Author: Jason Coffer  
**Date:** April 4, 2025  
**Copyright:** © Jason Coffer

---

## 📋 Description

**Virtual Medical Assistant (Velma)** is a C++ console-based program designed to help users evaluate their daily stress levels. By answering a series of 10 questions based on common stress indicators, users receive a categorized stress level (low, moderate, or high) and personalized health recommendations sourced from reputable medical organizations.

This tool is ideal for individuals seeking self-awareness about their mental well-being and guidance on improving their stress management practices.

---

## 💡 Features

- Interactive Likert-scale based questionnaire (1 to 3 rating)
- Three stress level classifications:
  - **Level A** – Low Stress
  - **Level B** – Moderate Stress
  - **Level C** – High Stress
- Personalized recommendations based on score
- Friendly and privacy-respecting tone
- Sources from reliable health organizations

---

## 🧠 Sample Topics in Questionnaire

- Sleep patterns  
- Appetite changes  
- Emotional well-being  
- Physical symptoms  
- Coping habits  

---

## 📚 Sources

The stress evaluation and recommendations in this program are informed by:

- [WebMD - Stress Management](https://www.webmd.com/balance/stress-management/stress-level-too-high)  
- [Mayo Clinic - Stress Management](https://www.mayoclinic.org/healthy-lifestyle/stress-management/in-depth/stress/art-20046037)  
- [Harvard Health - Stress Response](https://www.health.harvard.edu/staying-healthy/understanding-the-stress-response)  

---

## 🛠️ How to Compile and Run

To compile the program, use a C++ compiler like `g++`.

```bash
g++ -o vma vma.cpp
./vma
