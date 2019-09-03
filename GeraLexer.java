package Compilador;
import java.io.*;

public class GeraLexer {
    
    public static void main(String[] args) throws IOException {
        
        String arq = "C:/Users/alunos/Documents/NetBeansProjects/AnaliseLexica/src/Compilador/especificacao.flex";
        gerarLexer(arq);
        
    }
    
    public static void gerarLexer(String arq) {
        
        File file = new File(arq);
        jflex.Main.generate(file);
        
    }
}
