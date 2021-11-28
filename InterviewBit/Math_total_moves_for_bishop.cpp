int Solution::solve(int A, int B) {
    int count = 0;

    //top left
    count += min(A-1, B-1);

    //top right
    count += min(A-1, 8-B);

    //bottom left
    count += min(8-A, B-1);

    //bottom right 
    count += min(8-A, 8-B);

    return count;
}
