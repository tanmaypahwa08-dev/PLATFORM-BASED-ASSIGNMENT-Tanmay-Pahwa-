int* gradingStudents(int grades_count, int* grades, int* result_count) {
    *result_count = grades_count;
    int* result = (int*)malloc(grades_count * sizeof(int));

    for (int i = 0; i < grades_count; i++) {
        int g = grades[i];
        if (g >= 38) {
            int next = ((g + 4) / 5) * 5;
            if (next - g < 3) {
                g = next;
            }
        }
        result[i] = g;
    }
    return result;
}
