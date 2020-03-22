//---------Stack�� �̿��� ��Ģ���� ���α׷�(�켱���� ���)--------//
import java.util.*;

public class exjava {
	public static void main(String args[]){
		System.out.println("ex)32 + 4 * 55 - 4 / 2");
		
		//Scanner scan = new Scanner(System.in); 
		String input = "123 + 4 * 5 - 3 "; 
		String[] array = input.split(" "); 
		int result=0;
		int count=0; 
		//Stack<Integer> operate = new Stack<Integer>(); 
        Stack<String> stack = new Stack<String>(); 
        /*for(int i=0;i<array.length;i++){
            System.out.println(array[i]);
        }*/
		for(int i=0; i<array.length; i++) stack.add(array[i]); 
		
		for(int i=1; i<stack.size(); i=i+2){
			switch (stack.get(i)) {
				case "*": result = Integer.valueOf(stack.get(i-1)) * Integer.valueOf(stack.get(i+1));
							count++;//System.out.println("|"+count+". "+Integer.valueOf(stack.get(i-1)) +" * "+ Integer.valueOf(stack.get(i+1))+" = "+result);
							stack.add(i-1, String.valueOf(result)); 
							stack.remove(i); stack.remove(i); stack.remove(i); i=i-2;break;
				case "/": result = Integer.valueOf(stack.get(i-1)) / Integer.valueOf(stack.get(i+1));
							count++;//System.out.println("|"+count+". "+Integer.valueOf(stack.get(i-1)) +" / "+ Integer.valueOf(stack.get(i+1))+" = "+result);
							stack.add(i-1, String.valueOf(result));
							stack.remove(i); stack.remove(i); stack.remove(i); i=i-2;break;
				default: break;
			}
		}
		for(int i=1; i<stack.size(); i=i+2){
			if(i==1){
				result=0; 
				result = result+Integer.valueOf(stack.get(i-1));
			}switch(stack.get(i)){
				case "+": count++;System.out.print("|"+count+". "+result+" + "+Integer.valueOf(stack.get(i+1))+" = ");
							result = result+Integer.valueOf(stack.get(i+1)); break;
				case "-": count++;System.out.print("|"+count+". "+result+" - "+Integer.valueOf(stack.get(i+1))+" = ");
							result = result-Integer.valueOf(stack.get(i+1)); break;
			}
		}
		System.out.println("----------------------------------------");
		System.out.println(input+" = "+result);
    }
}

/*import java.util.Stack;

public class exjava{
    public static void main(String[] args){
        Stack<Double>num= new Stack<>();
        Stack<Character> sign = new Stack<>();
        Stack<Double>num2=new Stack<>();
        Stack<Character> sign2=new Stack<>();
        Stack<Character> stack = new Stack<>();
        stack.push('9');
        stack.push('*');
        stack.push('8');
        stack.push('+');
        stack.push('8');
        stack.push('-');
        stack.push('2');
        double result=0;
        int j=1;
        while(!stack.empty()){
            j=1;
            result = 0;
            if(stack.peek()>='0'&&stack.peek()<='9'){
                while(!stack.empty()){
                    if(stack.peek()<'0'||stack.peek()>'9')
                        break;
                    result+=(stack.pop()-'0')*j;
                    j*=10;
                }
                num.push(result);
            }
            else{
                sign.push(stack.pop());
            }
        }
        double a,b;
        while(true){
            if(num.empty())
                break;
            if(!sign.empty()&&sign.peek()=='*'){
                sign.pop();
                a=num.pop();
                b=num.pop();
                num2.push(a*b);
                if(num.empty())
                    break;
            }
            else if (!sign.empty()&&sign.peek()=='/'){
                sign.pop();
                a=num.pop();
                b=num.pop();
                num2.push(a/b);
                if(num.empty())
                    break;
            }
            else{
                sign2.push(sign.pop());
            }
            num2.push(num.pop());
            if(num.empty()&&!sign.empty()){
                sign2.push(sign.pop());
                break;
            }
            if(sign.empty())
                num2.push(num.pop());
        }
        while(!sign2.empty())
            sign.push(sign2.pop());
        while(!num2.empty())
            num.push(num2.pop());
        while(!sign.empty()){
            if(sign.peek()=='+'){
                sign.pop();
                a=num.pop();
                b=num.pop();
                num2.push(a+b);
            }
            else if(sign.peek()=='-'){
                sign.pop();
                a=num.pop();
                b=num.pop();
                num.push(a-b);
            }
        }
        while(!num.empty())
            System.out.println(num.pop());
    }
}
*/