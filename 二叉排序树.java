import java.util.Scanner;

public class Main {
public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    while(sc.hasNext()){
        int n=sc.nextInt();
        int[] s=new int[n];
        TreeNode temp=null,root=null;
        for(int i=0;i<s.length;i++){
            int num=sc.nextInt();
            if(root==null){
                root=new TreeNode(num);
                temp=root;
            }else{
                createTree(temp,new TreeNode(num));
            }
        }
        DLR(root);
        System.out.println();
        LDR(root);
        System.out.println();
        LRD(root);
        System.out.println();
    }
}
private static void LRD(TreeNode root) {
    // TODO Auto-generated method stub
    if(root!=null){
        LRD(root.left);
        LRD(root.right);
        System.out.print(root.value+" ");
    }
}
private static void LDR(TreeNode root) {
    // TODO Auto-generated method stub
    if(root!=null){
        LDR(root.left);
        System.out.print(root.value+" ");
        LDR(root.right);
    }
}
private static void DLR(TreeNode root) {
    // TODO Auto-generated method stub
    if(root!=null){
        System.out.print(root.value+" ");
        DLR(root.left);
        DLR(root.right);
    }
}
private static void createTree(TreeNode temp,TreeNode treeNode) {
    // TODO Auto-generated method stub
    if(temp.value==treeNode.value){
        return;
    }else if(treeNode.value<temp.value){
        if(temp.left!=null){
            temp=temp.left;
            createTree(temp,treeNode);
        }else{
            temp.left=treeNode;
        }
    }else if(treeNode.value>temp.value){
        if(temp.right!=null){
            temp=temp.right;
            createTree(temp,treeNode);
        }else{
            temp.right=treeNode;
        }
    }

}
static class TreeNode{
    int value;
    TreeNode left;
    TreeNode right;
    public TreeNode(int val){
        this.value=val;
    }
}

}