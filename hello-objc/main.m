//
//  main.m
//  hello-objc
//
//  Created by Anders Ackerman on 9/3/22.
//

#import <Foundation/Foundation.h>
#include "SomeClass.h"

int main(int argc, const char **argv) {
    
    @autoreleasepool {
        SomeClass *someClass = [[SomeClass alloc]init];
        
        NSNumber *a = [NSNumber numberWithFloat:12.015];
        NSNumber *b = [NSNumber numberWithFloat:12.015];
        NSNumber *result = [someClass multiplyA:a withB:b];
        NSNumber *sum = [someClass addA:a onB:b];
        
        
        NSString *resString = [result stringValue];
        NSString *resSum = [sum stringValue];
        
        NSLog(@"The product is %@ and the sum is %@", resString, resSum);
    }
    
    return 0;
}
