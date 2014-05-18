package com.ddd.novelcompression.rules;

/**
 * Created by Dom on 5/18/2014.
 */
public abstract class WordRule extends Rule {

    private String[] wordDictionary;

    protected WordRule(String[] wordDictionary) {
        setWordDictionary(wordDictionary);
    }

    private void setWordDictionary(String[] wordDictionary) {
        this.wordDictionary = wordDictionary;
    }

    @Override
    public boolean isValid(String wordChunk) {
        try {
            Integer.parseInt(wordChunk);
            return true;
        } catch (NumberFormatException ex) {}
        return false;
    }
}
