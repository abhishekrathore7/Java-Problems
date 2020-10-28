public class ReverseEachWord {

	
	public static String reverseEachWord(String input) {
		

        String outputString = "";
        int index = 0;
        
        for(int i = 0; i< input.length(); i++){
            if(input.charAt(i) == ' '){
                index = i+ 1;
                outputString = outputString + input.charAt(i);
            }else{
                   outputString = outputString.substring(0, index) + input.charAt(i) + outputString.substring(index);
            }
            
               
        }
             return outputString;
        
	}
}
