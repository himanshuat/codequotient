import java.util.ArrayList;

class Result {
    static int getMin(ArrayList<Integer> arr) {
        int min = Integer.MAX_VALUE;
        for (int i = 0; i < arr.size(); ++i) {
            min = arr.get(i) > 0 && arr.get(i) < min ? arr.get(i) : min;
        }
        return min;
    }

    static ArrayList<Integer> reduceArray(ArrayList<Integer> arr) {
        ArrayList<Integer> result = new ArrayList<Integer>();

        while (true) {
            int min = getMin(arr);
            int count = 0;

            for (int i = 0; i < arr.size(); ++i) {
                if (arr.get(i) > 0) {
                    arr.set(i, arr.get(i) - min);
                    ++count;
                }
            }

            if (count == 0) {
                break;
            }
            result.add(count);
        }

        return result;
    }
}