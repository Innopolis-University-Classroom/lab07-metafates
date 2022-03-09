template <typename WhatKind>
void multiples (WhatKind& sum, WhatKind x, int n) {
    sum++;
    for (int i = 1; i <= n; i++)
        // Cast i to 'WhatKind' type
        sum += x * (WhatKind) i;
}


