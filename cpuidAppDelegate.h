//
//  cpuidAppDelegate.h
//  cpuid
//
//  Created by Andrew Callan on 11/27/09.
//  Copyright 2009 Andrew Callan. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface cpuidAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end
