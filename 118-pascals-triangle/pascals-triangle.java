class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> triangle=new ArrayList<>();
        if(numRows==0)
        {
            return triangle;
        }
        List<Integer> firstrow=new ArrayList<>();
        firstrow.add(1);
        triangle.add(firstrow);
        for(int r=1;r<numRows;r++)
        {
            List<Integer> row=new ArrayList<>();
            row.add(1);
            for(int i=1;i<r;i++)
            {
                int value=triangle.get(r-1).get(i-1)+triangle.get(r-1).get(i);
                row.add(value);
            }
            row.add(1);
            triangle.add(row);
        }
        return triangle;
        
    }
}