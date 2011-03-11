/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class NSArray, NSString, NSAttributedString;

@interface IMAttributedStringParserContext : NSObject  {
    NSAttributedString *_inString;
}

@property(retain,readonly) NSString * name;
@property(retain,readonly) NSArray * resultsForLogging;
@property(readonly) BOOL shouldPreprocess;
@property(retain,readonly) NSAttributedString * inString;


- (id)name;
- (void)dealloc;
- (id)resultsForLogging;
- (void)parserDidStart:(id)arg1;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)parserDidEnd:(id)arg1;
- (BOOL)shouldPreprocess;
- (id)parser:(id)arg1 preprocessedAttributesForAttributes:(id)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (id)inString;
- (id)initWithAttributedString:(id)arg1;

@end