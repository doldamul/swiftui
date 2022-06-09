//
//  ContentView.swift
//  swiftUIManual
//
//  Created by 나무노트 on 2022/06/09.
//

import SwiftUI

/// 테스트.
struct ContentView: View {
    var body: some View {
        VStack {
            Image(systemName: "globe")
                .imageScale(.large)
                .foregroundColor(.accentColor)
            Text("Hello, world!")
        }
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}
