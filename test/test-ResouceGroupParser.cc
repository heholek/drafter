//
//  test-ResouceGroupParser.cc
//  snowcrash
//
//  Created by Zdenek Nemec on 5/4/13.
//  Copyright (c) 2013 Apiary.io. All rights reserved.
//

#include <iterator>
#include "catch.hpp"
#include "ResourceGroupParser.h"

using namespace snowcrash;

//TEST_CASE("resourcegroupparser/parse-resource", "Parse resource group section terminated by a resource")
//{
//    SourceData source = "012";
//    MarkdownBlock markdown;
//    markdown.blocks.push_back(MarkdownBlock(HeaderBlockType, "Group Name", 1, MakeSourceDataBlock(0, 1)));
//    markdown.blocks.push_back(MarkdownBlock(ParagraphBlockType, "p1", 0, MakeSourceDataBlock(1, 1)));
//    markdown.blocks.push_back(MarkdownBlock(HeaderBlockType, "/resource", 1, MakeSourceDataBlock(2, 1)));
//    
//    ResourceGroup resourceGroup;
//    ParseSectionResult result = ParseResourceGroup(markdown.blocks.begin(), markdown.blocks.end(), source, Blueprint(), resourceGroup);
//    
//    REQUIRE(result.first.error.code == Error::OK);
//    
//    const MarkdownBlock::Stack &blocks = markdown.blocks;
//    REQUIRE(std::distance(blocks.begin(), result.second) == 3);
//    
//    REQUIRE(resourceGroup.name == "Group Name");
//    REQUIRE(resourceGroup.description == "1");
//    REQUIRE(resourceGroup.resources.size() == 1);
//    REQUIRE(resourceGroup.resources.front().uri == "/resource");
//}
//
//TEST_CASE("resourcegroupparser/parse-multi", "Parse multiple resource")
//{
//    SourceData source = "0123";
//    MarkdownBlock markdown;
//    markdown.blocks.push_back(MarkdownBlock(HeaderBlockType, "/r1", 1, MakeSourceDataBlock(0, 1)));
//    markdown.blocks.push_back(MarkdownBlock(ParagraphBlockType, "p1", 0, MakeSourceDataBlock(1, 1)));
//    markdown.blocks.push_back(MarkdownBlock(HeaderBlockType, "/r2", 1, MakeSourceDataBlock(2, 1)));
//    markdown.blocks.push_back(MarkdownBlock(ParagraphBlockType, "p2", 0, MakeSourceDataBlock(3, 1)));
//    
//    ResourceGroup resourceGroup;
//    ParseSectionResult result = ParseResourceGroup(markdown.blocks.begin(), markdown.blocks.end(), source, Blueprint(), resourceGroup);
//    
//    REQUIRE(result.first.error.code == Error::OK);
//    
//    const MarkdownBlock::Stack &blocks = markdown.blocks;
//    REQUIRE(std::distance(blocks.begin(), result.second) == 4);
//    
//    REQUIRE(resourceGroup.name.empty());
//    REQUIRE(resourceGroup.description.empty());
//    REQUIRE(resourceGroup.resources.size() == 2);
//    REQUIRE(resourceGroup.resources[0].uri == "/r1");
//    REQUIRE(resourceGroup.resources[0].description == "1");
//    REQUIRE(resourceGroup.resources[1].uri == "/r2");
//    REQUIRE(resourceGroup.resources[1].description == "3");
//}
