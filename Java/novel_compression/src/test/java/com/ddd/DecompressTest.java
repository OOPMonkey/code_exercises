package com.ddd;

import com.ddd.novelcompression.NovelCompressor;
import com.ddd.novelcompression.rules.LowerCaseRule;
import org.testng.Assert;
import org.testng.annotations.Test;

public class DecompressTest {

	@Test
	public void exampleDataTest() {
		String[] dictionary = { "is", "my", "hello", "name", "stan" };
        String chunk = "2! ! R 1^ 3 0 4^ . E";
        String expectedOutput = "HELLO!\nMy name is Stan.";

        NovelCompressor compressor = new NovelCompressor(dictionary, chunk);
        Assert.assertEquals(expectedOutput, compressor.decompress());
    }

    @Test
    public void lowerCaseRuleTest() {
        String[] dictionary = { "is", "my", "hello", "name", "stan" };
        String wordChunk = "0";
        LowerCaseRule lowerCaseRule = new LowerCaseRule(dictionary);

        Assert.assertTrue(lowerCaseRule.isValid(wordChunk));
        Assert.assertEquals(lowerCaseRule.execute(wordChunk), "is");

    }
}