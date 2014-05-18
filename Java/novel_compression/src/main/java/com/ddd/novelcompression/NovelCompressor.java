package com.ddd.novelcompression;

public class NovelCompressor {

    private String[] dictionary;
    private String chunk;

    public NovelCompressor(String[] dictionary, String chunk) {
        this.dictionary = dictionary;
        this.chunk = chunk;
    }

    private void setDictionary(String[] dictionary) {
        this.dictionary = dictionary;
    }

    private void setChunk(String chunk) {
        this.chunk = chunk;
    }

    public String[] getDictionary() {
        return dictionary;
    }

    public String getChunk() {
        return chunk;
    }

    public String decompress() {
        return  "";
    }
}
