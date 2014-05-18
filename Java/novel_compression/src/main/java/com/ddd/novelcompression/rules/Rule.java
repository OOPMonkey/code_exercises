package com.ddd.novelcompression.rules;

public abstract class Rule {

    public abstract boolean isValid(String wordChunk);
    public abstract String execute(String wordChunk);
}
